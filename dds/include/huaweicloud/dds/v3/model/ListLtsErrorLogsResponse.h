
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsErrorLogsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsErrorLogsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ErrorLogDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListLtsErrorLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLtsErrorLogsResponse();
    virtual ~ListLtsErrorLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsErrorLogsResponse members

    /// <summary>
    /// 错误日志具体信息。
    /// </summary>

    std::vector<ErrorLogDetail>& getErrorLogs();
    bool errorLogsIsSet() const;
    void unseterrorLogs();
    void setErrorLogs(const std::vector<ErrorLogDetail>& value);


protected:
    std::vector<ErrorLogDetail> errorLogs_;
    bool errorLogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsErrorLogsResponse_H_
