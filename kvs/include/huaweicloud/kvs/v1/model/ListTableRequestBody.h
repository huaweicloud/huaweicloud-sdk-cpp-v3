
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ListTableRequestBody_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ListTableRequestBody_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ListTableRequestBody
    : public ModelBase
{
public:
    ListTableRequestBody();
    virtual ~ListTableRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ListTableRequestBody members

    /// <summary>
    /// 
    /// </summary>

    std::string getCursorName() const;
    bool cursorNameIsSet() const;
    void unsetcursorName();
    void setCursorName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimitNum() const;
    bool limitNumIsSet() const;
    void unsetlimitNum();
    void setLimitNum(int32_t value);


protected:
    std::string cursorName_;
    bool cursorNameIsSet_;
    int32_t limitNum_;
    bool limitNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ListTableRequestBody_H_
