
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShare_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShare_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/Tag.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 描述RAM中的资源共享。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ResourceShare
    : public ModelBase
{
public:
    ResourceShare();
    virtual ~ResourceShare();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceShare members

    /// <summary>
    /// 资源共享实例的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

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
    /// 资源共享实例的所有者ID。
    /// </summary>

    std::string getOwningAccountId() const;
    bool owningAccountIdIsSet() const;
    void unsetowningAccountId();
    void setOwningAccountId(const std::string& value);

    /// <summary>
    /// 资源共享实例的状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 资源共享实例的标签列表。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 创建资源共享实例的时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 最后一次更新资源共享实例的时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool allowExternalPrincipals_;
    bool allowExternalPrincipalsIsSet_;
    std::string owningAccountId_;
    bool owningAccountIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShare_H_
