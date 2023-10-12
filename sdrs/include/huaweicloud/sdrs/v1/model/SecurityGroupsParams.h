
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_SecurityGroupsParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_SecurityGroupsParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 安全组数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  SecurityGroupsParams
    : public ModelBase
{
public:
    SecurityGroupsParams();
    virtual ~SecurityGroupsParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecurityGroupsParams members

    /// <summary>
    /// 安全组的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_SecurityGroupsParams_H_
