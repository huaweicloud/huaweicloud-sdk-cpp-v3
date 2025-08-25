
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_APIVersionDetail_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_APIVersionDetail_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/APIVersionLink.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// API版本的详细信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  APIVersionDetail
    : public ModelBase
{
public:
    APIVersionDetail();
    virtual ~APIVersionDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// APIVersionDetail members

    /// <summary>
    /// API版本ID。例如v3。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// API版本的URL链接信息。
    /// </summary>

    std::vector<APIVersionLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<APIVersionLink>& value);

    /// <summary>
    /// 如果API的这个版本支持微版本，则支持最小的微版本。如果不支持微版本，这将是空字符串。
    /// </summary>

    std::string getMinVersion() const;
    bool minVersionIsSet() const;
    void unsetminVersion();
    void setMinVersion(const std::string& value);

    /// <summary>
    /// API版本的状态。 可以是： - CURRENT这是使用的API的首选版本； - SUPPORTED：这是一个较老的，但仍然支持的API版本； - DEPRECATED：一个被废弃的API版本，该版本将被删除
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// API发布时间（UTC格式）。例如API版本为v3时，值为&#39;2018-09-15 00:00:00Z&#39;。
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
    std::vector<APIVersionLink> links_;
    bool linksIsSet_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_APIVersionDetail_H_
