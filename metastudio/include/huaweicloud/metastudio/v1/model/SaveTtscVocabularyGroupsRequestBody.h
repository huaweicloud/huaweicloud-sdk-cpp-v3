
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyGroupsRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyGroupsRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SaveTtscVocabularyGroupsRequestBody
    : public ModelBase
{
public:
    SaveTtscVocabularyGroupsRequestBody();
    virtual ~SaveTtscVocabularyGroupsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveTtscVocabularyGroupsRequestBody members

    /// <summary>
    /// 分组名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyGroupsRequestBody_H_
