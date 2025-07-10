
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateOrganizationalUnitReqBody_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateOrganizationalUnitReqBody_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建注册OU的请求体。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CreateOrganizationalUnitReqBody
    : public ModelBase
{
public:
    CreateOrganizationalUnitReqBody();
    virtual ~CreateOrganizationalUnitReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOrganizationalUnitReqBody members

    /// <summary>
    /// 要分配给新组织单元的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 要在其中创建新组织单元的根或组织单元的唯一标识符。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateOrganizationalUnitReqBody_H_
