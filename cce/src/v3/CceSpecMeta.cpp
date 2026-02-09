#include <huaweicloud/cce/v3/CceSpecMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CceSpecMeta::genRequestDefForDeleteAutopilotJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceSpecMeta::genRequestDefForGetAutopilotOneJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceSpecMeta::genRequestDefForListAutopilotJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

}
}
}
}
