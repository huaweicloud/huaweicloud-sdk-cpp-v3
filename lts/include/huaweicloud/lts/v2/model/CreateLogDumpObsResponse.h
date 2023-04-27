
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogDumpObsResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateLogDumpObsResponse();
    virtual ~CreateLogDumpObsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateLogDumpObsResponse members

    /// <summary>
    /// 转储id。
    /// </summary>

    std::string getLogDumpObsId() const;
    bool logDumpObsIdIsSet() const;
    void unsetlogDumpObsId();
    void setLogDumpObsId(const std::string& value);


protected:
    std::string logDumpObsId_;
    bool logDumpObsIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsResponse_H_
