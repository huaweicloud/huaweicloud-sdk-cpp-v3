
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesResponse_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/VocabInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  ShowVocabulariesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVocabulariesResponse();
    virtual ~ShowVocabulariesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVocabulariesResponse members

    /// <summary>
    /// 热词表数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 调用成功返回热词表列表，调用失败时无此字段。
    /// </summary>

    std::vector<VocabInfo>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<VocabInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<VocabInfo> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesResponse_H_
