
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTracesResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTracesResponse_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/MetaData.h>
#include <huaweicloud/cts/v3/model/Traces.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListTracesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTracesResponse();
    virtual ~ListTracesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTracesResponse members

    /// <summary>
    /// 本次查询事件列表返回事件数组。
    /// </summary>

    std::vector<Traces>& getTraces();
    bool tracesIsSet() const;
    void unsettraces();
    void setTraces(const std::vector<Traces>& value);

    /// <summary>
    /// 
    /// </summary>

    MetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const MetaData& value);


protected:
    std::vector<Traces> traces_;
    bool tracesIsSet_;
    MetaData metaData_;
    bool metaDataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTracesResponse_H_
