

#include "huaweicloud/kvs/v1/model/Kv_options.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Kv_options::Kv_options()
{
    returnHint_ = false;
    returnHintIsSet_ = false;
}

Kv_options::~Kv_options() = default;

void Kv_options::validate()
{
}

bool Kv_options::toBson(Builder &builder) const
{

    if (returnHintIsSet_ && !bson_append(builder, "return_hint", returnHint_)) {
        return false;
    }

    return true;
}

bool Kv_options::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "return_hint") {
            if (!bson_get(it, returnHint_)) {
                return false;
            }
            returnHintIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

bool Kv_options::isReturnHint() const
{
    return returnHint_;
}

void Kv_options::setReturnHint(bool value)
{
    returnHint_ = value;
    returnHintIsSet_ = true;
}

bool Kv_options::returnHintIsSet() const
{
    return returnHintIsSet_;
}

void Kv_options::unsetreturnHint()
{
    returnHintIsSet_ = false;
}

}
}
}
}
}


