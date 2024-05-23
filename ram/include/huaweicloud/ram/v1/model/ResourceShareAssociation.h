
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareAssociation_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareAssociation_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 与资源共享实例关联的资源使用者或共享资源的详细信息。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ResourceShareAssociation
    : public ModelBase
{
public:
    ResourceShareAssociation();
    virtual ~ResourceShareAssociation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceShareAssociation members

    /// <summary>
    /// 绑定的实体。这可以是共享资源的URN、账号ID、组织根的URN或OU的URN之一。
    /// </summary>

    std::string getAssociatedEntity() const;
    bool associatedEntityIsSet() const;
    void unsetassociatedEntity();
    void setAssociatedEntity(const std::string& value);

    /// <summary>
    /// 绑定中包含的实体类型。
    /// </summary>

    std::string getAssociationType() const;
    bool associationTypeIsSet() const;
    void unsetassociationType();
    void setAssociationType(const std::string& value);

    /// <summary>
    /// 绑定被创建的时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 最后一次更新绑定的时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 标识资源使用者是否和共享的拥有者属于同一个组织
    /// </summary>

    bool isExternal() const;
    bool externalIsSet() const;
    void unsetexternal();
    void setExternal(bool value);

    /// <summary>
    /// 资源共享实例的ID。
    /// </summary>

    std::string getResourceShareId() const;
    bool resourceShareIdIsSet() const;
    void unsetresourceShareId();
    void setResourceShareId(const std::string& value);

    /// <summary>
    /// 资源共享实例的名称。
    /// </summary>

    std::string getResourceShareName() const;
    bool resourceShareNameIsSet() const;
    void unsetresourceShareName();
    void setResourceShareName(const std::string& value);

    /// <summary>
    /// 绑定的当前状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 绑定的当前状态的描述。
    /// </summary>

    std::string getStatusMessage() const;
    bool statusMessageIsSet() const;
    void unsetstatusMessage();
    void setStatusMessage(const std::string& value);


protected:
    std::string associatedEntity_;
    bool associatedEntityIsSet_;
    std::string associationType_;
    bool associationTypeIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    bool external_;
    bool externalIsSet_;
    std::string resourceShareId_;
    bool resourceShareIdIsSet_;
    std::string resourceShareName_;
    bool resourceShareNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusMessage_;
    bool statusMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareAssociation_H_
