
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowActualHeadPipelineResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowActualHeadPipelineResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/PipelineDetailDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowActualHeadPipelineResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowActualHeadPipelineResponse();
    virtual ~ShowActualHeadPipelineResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowActualHeadPipelineResponse members

    /// <summary>
    /// 
    /// </summary>

    PipelineDetailDto getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const PipelineDetailDto& value);

    /// <summary>
    /// 最新的commit是否有对应的流水线
    /// </summary>

    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetisValid();
    void setIsValid(bool value);


protected:
    PipelineDetailDto data_;
    bool dataIsSet_;
    bool isValid_;
    bool isValidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowActualHeadPipelineResponse_H_
