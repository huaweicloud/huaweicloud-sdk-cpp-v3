
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/TagDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// CreateAccount 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateResourceAccountReqBody
    : public ModelBase
{
public:
    CreateResourceAccountReqBody();
    virtual ~CreateResourceAccountReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResourceAccountReqBody members

    /// <summary>
    /// 帐号名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 委托名称
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 要绑定到新创建的帐号的标签列表。
    /// </summary>

    std::vector<TagDto>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagDto>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<TagDto> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountReqBody_H_
