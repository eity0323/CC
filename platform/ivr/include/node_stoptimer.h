/*
 * Copyright 2002-2014 the original author or authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      CC/LICENSE
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _NODE_STOPTIMER_H_
#define _NODE_STOPTIMER_H_

#include "node_base.h"

class NodeStopTimer : public NodeBase {
public:
    NodeStopTimer(const uint32_t id, const string& name,
                  const string& type, const string& desc, const key_map_t& keymap);
    virtual ~NodeStopTimer(void);

    virtual NodeBase* run(base_script_t* param);

    virtual bool load_other();
private:

    virtual std::string enter(const map<string, variable_t>& vars) const;
    virtual std::string leave(const map<string, variable_t>& vars) const;

private:
    string _timerid;

    static const char* PARAM_TIMERID;
};
#endif // _NODE_STOPTIMER_H_

