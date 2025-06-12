
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchExecuteAssetActionResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchExecuteAssetActionResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/metastudio/v1/model/AssetActionResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BatchExecuteAssetActionResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchExecuteAssetActionResponse();
    virtual ~BatchExecuteAssetActionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchExecuteAssetActionResponse members

    /// <summary>
    /// 批量操作结果
    /// </summary>

    std::vector<AssetActionResult>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<AssetActionResult>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<AssetActionResult> results_;
    bool resultsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchExecuteAssetActionResponse_H_
