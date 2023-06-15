
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ProjectsListInfo_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ProjectsListInfo_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/SelfLinksInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目信息
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ProjectsListInfo
    : public ModelBase
{
public:
    ProjectsListInfo();
    virtual ~ProjectsListInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProjectsListInfo members

    /// <summary>
    /// 域 ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 是否是域级
    /// </summary>

    bool isIsDomain() const;
    bool isDomainIsSet() const;
    void unsetisDomain();
    void setIsDomain(bool value);

    /// <summary>
    /// 父项目 ID
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 是否开启
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    SelfLinksInfo getLinks() const;
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const SelfLinksInfo& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    bool isDomain_;
    bool isDomainIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    SelfLinksInfo links_;
    bool linksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ProjectsListInfo_H_
