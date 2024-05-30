
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationalUnitReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationalUnitReqBody_H_


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
/// CreateOrganizationalUnit操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateOrganizationalUnitReqBody
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

    /// <summary>
    /// 要附加到新创建的组织单元的标签列表。
    /// </summary>

    std::vector<TagDto>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagDto>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::vector<TagDto> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationalUnitReqBody_H_
