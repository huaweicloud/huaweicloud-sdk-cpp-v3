
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsErrorLogDetailsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsErrorLogDetailsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/LtsLogErrorDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListLtsErrorLogDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLtsErrorLogDetailsResponse();
    virtual ~ListLtsErrorLogDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsErrorLogDetailsResponse members

    /// <summary>
    /// 错误日志列表。
    /// </summary>

    std::vector<LtsLogErrorDetail>& getErrorLogList();
    bool errorLogListIsSet() const;
    void unseterrorLogList();
    void setErrorLogList(const std::vector<LtsLogErrorDetail>& value);


protected:
    std::vector<LtsLogErrorDetail> errorLogList_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListLtsErrorLogDetailsResponse_H_
