
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateThirdPartyAssociateDTO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateThirdPartyAssociateDTO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联外部链接返回结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateThirdPartyAssociateDTO
    : public ModelBase
{
public:
    CreateThirdPartyAssociateDTO();
    virtual ~CreateThirdPartyAssociateDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateThirdPartyAssociateDTO members

    /// <summary>
    /// 租户唯一标识ID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的名称。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 外部链接的类别。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的修改时间。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的创建人。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 租户下项目唯一标识ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 工作项实例对应的唯一标识ID。
    /// </summary>

    std::string getWorkitemId() const;
    bool workitemIdIsSet() const;
    void unsetworkitemId();
    void setWorkitemId(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的修改人。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// 外部链接操作项ID。
    /// </summary>

    std::string getOperationId() const;
    bool operationIdIsSet() const;
    void unsetoperationId();
    void setOperationId(const std::string& value);

    /// <summary>
    /// 新关联外部链接时会创建一条数据，该数据的唯一标识ID，可以在查询外部链接接口以及关联外部链接接口响应体中找到。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的创建时间。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 外部链接的生命周期。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 外部链接的类型。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 区域 。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string workitemId_;
    bool workitemIdIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string operationId_;
    bool operationIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateThirdPartyAssociateDTO_H_
