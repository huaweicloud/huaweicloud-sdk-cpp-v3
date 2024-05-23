
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_CreateResourceShareReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_CreateResourceShareReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/Tag.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The request body of the CreateResourceShare operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  CreateResourceShareReqBody
    : public ModelBase
{
public:
    CreateResourceShareReqBody();
    virtual ~CreateResourceShareReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResourceShareReqBody members

    /// <summary>
    /// 资源共享实例的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 资源共享实例的描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 资源共享实例是否支持共享给组织外账号。
    /// </summary>

    bool isAllowExternalPrincipals() const;
    bool allowExternalPrincipalsIsSet() const;
    void unsetallowExternalPrincipals();
    void setAllowExternalPrincipals(bool value);

    /// <summary>
    /// 资源共享实例关联的RAM权限列表。一种资源类型只能关联一个RAM权限。如果您没有指定权限ID，RAM将自动为每个资源类型关联默认权限。
    /// </summary>

    std::vector<std::string>& getPermissionIds();
    bool permissionIdsIsSet() const;
    void unsetpermissionIds();
    void setPermissionIds(const std::vector<std::string>& value);

    /// <summary>
    /// 资源共享实例关联的一个或多个资源使用者的列表。
    /// </summary>

    std::vector<std::string>& getPrincipals();
    bool principalsIsSet() const;
    void unsetprincipals();
    void setPrincipals(const std::vector<std::string>& value);

    /// <summary>
    /// 资源共享实例关联的一个或多个共享资源URN的列表。
    /// </summary>

    std::vector<std::string>& getResourceUrns();
    bool resourceUrnsIsSet() const;
    void unsetresourceUrns();
    void setResourceUrns(const std::vector<std::string>& value);

    /// <summary>
    /// 资源共享标签列表。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool allowExternalPrincipals_;
    bool allowExternalPrincipalsIsSet_;
    std::vector<std::string> permissionIds_;
    bool permissionIdsIsSet_;
    std::vector<std::string> principals_;
    bool principalsIsSet_;
    std::vector<std::string> resourceUrns_;
    bool resourceUrnsIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_CreateResourceShareReqBody_H_
