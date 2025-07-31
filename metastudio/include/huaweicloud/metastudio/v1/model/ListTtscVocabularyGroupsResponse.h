
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtscVocabularyGroupsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtscVocabularyGroupsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TtscGroupAssetsConfig.h>
#include <vector>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListTtscVocabularyGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTtscVocabularyGroupsResponse();
    virtual ~ListTtscVocabularyGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTtscVocabularyGroupsResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 自定义词表分组列表。
    /// </summary>

    std::vector<TtscGroupAssetsConfig>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<TtscGroupAssetsConfig>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<TtscGroupAssetsConfig> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtscVocabularyGroupsResponse_H_
