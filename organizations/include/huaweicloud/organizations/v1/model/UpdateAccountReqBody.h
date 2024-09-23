
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateAccountReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateAccountReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateAccountReqBody 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UpdateAccountReqBody
    : public ModelBase
{
public:
    UpdateAccountReqBody();
    virtual ~UpdateAccountReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAccountReqBody members

    /// <summary>
    /// 描述信息。如果为空字符串，则表示把描述信息设置为空。如果为NULL，则不做任何处理。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateAccountReqBody_H_
