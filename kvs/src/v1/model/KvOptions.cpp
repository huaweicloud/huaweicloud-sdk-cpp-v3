

#include "huaweicloud/kvs/v1/model/KvOptions.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




KvOptions::KvOptions()
{
    returnHint_ = false;
    returnHintIsSet_ = false;
}

KvOptions::~KvOptions() = default;

void KvOptions::validate()
{
}

bool KvOptions::toBson(Builder &builder) const
{

    if (returnHintIsSet_ && !bson_append(builder, "ReturnHint", returnHint_)) {
        return false;
    }

    return true;
}

bool KvOptions::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "ReturnHint") {
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

bool KvOptions::isReturnHint() const
{
    return returnHint_;
}

void KvOptions::setReturnHint(bool value)
{
    returnHint_ = value;
    returnHintIsSet_ = true;
}

bool KvOptions::returnHintIsSet() const
{
    return returnHintIsSet_;
}

void KvOptions::unsetreturnHint()
{
    returnHintIsSet_ = false;
}

}
}
}
}
}


