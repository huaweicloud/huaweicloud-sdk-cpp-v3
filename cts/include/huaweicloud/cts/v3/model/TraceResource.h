
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_TraceResource_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_TraceResource_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  TraceResource
    : public ModelBase
{
public:
    TraceResource();
    virtual ~TraceResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TraceResource members

    /// <summary>
    /// 云服务类型。必须为已对接CTS的云服务的英文缩写，且服务类型一般为大写字母。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 云服务对应的资源类型列表。
    /// </summary>

    std::vector<std::string>& getResource();
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::vector<std::string>& value);


protected:
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::vector<std::string> resource_;
    bool resourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_TraceResource_H_
