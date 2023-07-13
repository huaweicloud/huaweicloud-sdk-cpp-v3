
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListBreifStructTemplateResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListBreifStructTemplateResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/lts/v2/model/BriefStructTemplateModel.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  ListBreifStructTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBreifStructTemplateResponse();
    virtual ~ListBreifStructTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListBreifStructTemplateResponse members

    /// <summary>
    /// 结构化模板缩略信息列表
    /// </summary>

    std::vector<BriefStructTemplateModel>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<BriefStructTemplateModel>& value);


protected:
    std::vector<BriefStructTemplateModel> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListBreifStructTemplateResponse_H_
