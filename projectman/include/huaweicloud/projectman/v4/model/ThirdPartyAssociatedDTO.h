
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedDTO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedDTO_H_


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
/// 查询外部链接结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ThirdPartyAssociatedDTO
    : public ModelBase
{
public:
    ThirdPartyAssociatedDTO();
    virtual ~ThirdPartyAssociatedDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThirdPartyAssociatedDTO members

    /// <summary>
    /// 工作项归属项目的项目空间ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

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
    /// 工作项下关联外部链接的创建人。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的名称。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项下关联外部链接的地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedDTO_H_
