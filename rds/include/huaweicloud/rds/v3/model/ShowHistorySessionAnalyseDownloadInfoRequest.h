
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHistorySessionAnalyseDownloadInfoRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHistorySessionAnalyseDownloadInfoRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowHistorySessionAnalyseDownloadInfoRequest
    : public ModelBase
{
public:
    ShowHistorySessionAnalyseDownloadInfoRequest();
    virtual ~ShowHistorySessionAnalyseDownloadInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHistorySessionAnalyseDownloadInfoRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 类型。 session    表示下载历史会话 wait_event    表示下载历史等待事件 top_sql    表示下载历史top sql
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 语言。默认en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHistorySessionAnalyseDownloadInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHistorySessionAnalyseDownloadInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHistorySessionAnalyseDownloadInfoRequest_H_
