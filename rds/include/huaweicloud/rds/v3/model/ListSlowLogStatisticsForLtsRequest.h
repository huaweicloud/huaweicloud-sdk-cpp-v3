
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogStatisticsForLtsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogStatisticsForLtsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/SlowLogStatisticsForLtsRequest.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSlowLogStatisticsForLtsRequest
    : public ModelBase
{
public:
    ListSlowLogStatisticsForLtsRequest();
    virtual ~ListSlowLogStatisticsForLtsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSlowLogStatisticsForLtsRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 语言。默认en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SlowLogStatisticsForLtsRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SlowLogStatisticsForLtsRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    SlowLogStatisticsForLtsRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSlowLogStatisticsForLtsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSlowLogStatisticsForLtsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogStatisticsForLtsRequest_H_
