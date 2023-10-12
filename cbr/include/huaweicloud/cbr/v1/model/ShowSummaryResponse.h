
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowSummaryResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowSummaryResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSummaryResponse();
    virtual ~ShowSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSummaryResponse members

    /// <summary>
    /// 总容量大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 总使用量
    /// </summary>

    int32_t getUsedSize() const;
    bool usedSizeIsSet() const;
    void unsetusedSize();
    void setUsedSize(int32_t value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    int32_t usedSize_;
    bool usedSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowSummaryResponse_H_
