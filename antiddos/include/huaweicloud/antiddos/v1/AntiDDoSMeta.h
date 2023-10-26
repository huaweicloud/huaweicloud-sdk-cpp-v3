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
    static HttpRequestDef genRequestDefForShowAlertConfig();
    static HttpRequestDef genRequestDefForShowDefaultConfig();
    static HttpRequestDef genRequestDefForUpdateAlertConfig();
    static HttpRequestDef genRequestDefForListDDosStatus();
    static HttpRequestDef genRequestDefForListDailyLog();
    static HttpRequestDef genRequestDefForListDailyReport();
    static HttpRequestDef genRequestDefForListNewConfigs();
    static HttpRequestDef genRequestDefForListWeeklyReports();
    static HttpRequestDef genRequestDefForShowDDos();
    static HttpRequestDef genRequestDefForShowDDosStatus();
    static HttpRequestDef genRequestDefForShowNewTaskStatus();
    static HttpRequestDef genRequestDefForUpdateDDos();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_AntiDDoSMeta_H_
