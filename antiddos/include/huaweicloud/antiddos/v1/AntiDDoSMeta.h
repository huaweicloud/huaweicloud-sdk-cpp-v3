#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_AntiDDoSMeta_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_AntiDDoSMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  AntiDDoSMeta {
public:
    static HttpRequestDef genRequestDefForCreateDefaultConfig();
    static HttpRequestDef genRequestDefForDeleteDefaultConfig();
    static HttpRequestDef genRequestDefForShowDefaultConfig();
    static HttpRequestDef genRequestDefForEnableDefensePolicy();
    static HttpRequestDef genRequestDefForListDDosStatus();
    static HttpRequestDef genRequestDefForListDailyLog();
    static HttpRequestDef genRequestDefForListDailyReport();
    static HttpRequestDef genRequestDefForListQuota();
    static HttpRequestDef genRequestDefForListWeeklyReports();
    static HttpRequestDef genRequestDefForShowDDos();
    static HttpRequestDef genRequestDefForShowDDosStatus();
    static HttpRequestDef genRequestDefForShowLogConfig();
    static HttpRequestDef genRequestDefForUpdateDDos();
    static HttpRequestDef genRequestDefForUpdateLogConfig();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_AntiDDoSMeta_H_
