
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListErrorLogsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListErrorLogsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ErrorlogResult.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ListErrorLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListErrorLogsResponse();
    virtual ~ListErrorLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListErrorLogsResponse members

    /// <summary>
    /// 具体信息。
    /// </summary>

    std::vector<ErrorlogResult>& getErrorLogList();
    bool errorLogListIsSet() const;
    void unseterrorLogList();
    void setErrorLogList(const std::vector<ErrorlogResult>& value);

    /// <summary>
    /// 数据库版本总记录数。
    /// </summary>

    int32_t getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(int32_t value);


protected:
    std::vector<ErrorlogResult> errorLogList_;
    bool errorLogListIsSet_;
    int32_t totalRecord_;
    bool totalRecordIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListErrorLogsResponse_H_
