
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ApiVersion_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ApiVersion_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/LinksInfoResponse.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// API版本详细信息列表。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ApiVersion
    : public ModelBase
{
public:
    ApiVersion();
    virtual ~ApiVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ApiVersion members

    /// <summary>
    /// API版本号，如v1、v3。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 对应API的链接信息，v1、v3版本该字段为空。
    /// </summary>

    std::vector<LinksInfoResponse>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<LinksInfoResponse>& value);

    /// <summary>
    /// 版本状态。 取值“CURRENT”，表示该版本为主推版本。 取值“DEPRECATED”，表示为废弃版本，存在后续删除的可能。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 版本更新时间。 格式为“yyyy-mm-dd Thh:mm:ssZ”。 其中，T指某个时间的开始；Z指UTC时间。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<LinksInfoResponse> links_;
    bool linksIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updated_;
    bool updatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ApiVersion_H_
