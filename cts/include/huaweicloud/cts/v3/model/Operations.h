
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_Operations_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_Operations_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作事件列表，目前最多支持对100服务的1000个关键操作进行配置。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  Operations
    : public ModelBase
{
public:
    Operations();
    virtual ~Operations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Operations members

    /// <summary>
    /// 标识云服务类型。必须为已对接CTS的云服务的英文缩写，且服务类型一般为大写字母。 已对接的云服务列表参见《云审计服务用户指南》“支持的服务”章节。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 标识资源类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 标识事件名称。
    /// </summary>

    std::vector<std::string>& getTraceNames();
    bool traceNamesIsSet() const;
    void unsettraceNames();
    void setTraceNames(const std::vector<std::string>& value);


protected:
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::vector<std::string> traceNames_;
    bool traceNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_Operations_H_
