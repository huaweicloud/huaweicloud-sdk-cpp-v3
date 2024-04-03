
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaVersionDetail_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaVersionDetail_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaLink.h>
#include <string>
#include <huaweicloud/ecs/v2/model/NovaVersionMediaType.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
///  
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaVersionDetail
    : public ModelBase
{
public:
    NovaVersionDetail();
    virtual ~NovaVersionDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaVersionDetail members

    /// <summary>
    /// 所讨论的版本的通用名称。仅仅是信息性的，它没有真正的语义。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 链接到资源的问题。有关更多信息，请参见[OpenStack Documentation](http://developer.openstack.org/api-guide/compute/links_and_references.html)。
    /// </summary>

    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);

    /// <summary>
    /// 媒体类型。
    /// </summary>

    std::vector<NovaVersionMediaType>& getMediaTypes();
    bool mediaTypesIsSet() const;
    void unsetmediaTypes();
    void setMediaTypes(const std::vector<NovaVersionMediaType>& value);

    /// <summary>
    /// 如果API的这个版本支持微版本，则支持最小的微版本。如果不支持微版本，这将是空字符串。
    /// </summary>

    std::string getMinVersion() const;
    bool minVersionIsSet() const;
    void unsetminVersion();
    void setMinVersion(const std::string& value);

    /// <summary>
    /// 这个是API版本的状态。  可以是：  - CURRENT这是使用的API的首选版本； - SUPPORTED：这是一个较老的，但仍然支持的API版本； - DEPRECATED：一个被废弃的API版本，该版本将被删除
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 一个有特定值的字符串。API版本为2.0时，值为&#39;2011-01-21T11:33:21Z&#39; ，API版本是2.1时，值为&#39; 2013-07-23T11:33:21Z&#39;。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 如果API的这个版本支持微版本，则支持最大的微版本。如果不支持微版本，这将是空字符串。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;
    std::vector<NovaVersionMediaType> mediaTypes_;
    bool mediaTypesIsSet_;
    std::string minVersion_;
    bool minVersionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaVersionDetail_H_
