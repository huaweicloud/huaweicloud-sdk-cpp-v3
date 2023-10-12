
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListErrorlogForLtsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListErrorlogForLtsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ErrorLogItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListErrorlogForLtsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListErrorlogForLtsResponse();
    virtual ~ListErrorlogForLtsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListErrorlogForLtsResponse members

    /// <summary>
    /// 日志数据集合。
    /// </summary>

    std::vector<ErrorLogItem>& getErrorLogList();
    bool errorLogListIsSet() const;
    void unseterrorLogList();
    void setErrorLogList(const std::vector<ErrorLogItem>& value);


protected:
    std::vector<ErrorLogItem> errorLogList_;
    bool errorLogListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListErrorlogForLtsResponse_H_
