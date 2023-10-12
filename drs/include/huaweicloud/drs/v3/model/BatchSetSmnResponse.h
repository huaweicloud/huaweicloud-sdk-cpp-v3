
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetSmnResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetSmnResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ImportSmnResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchSetSmnResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchSetSmnResponse();
    virtual ~BatchSetSmnResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSetSmnResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ImportSmnResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<ImportSmnResp>& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ImportSmnResp> results_;
    bool resultsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetSmnResponse_H_
