
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotWordsReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotWordsReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/HotWordsTypeEnum.h>
#include <huaweicloud/metastudio/v1/model/CreateSisHotWords.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建热词请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateHotWordsReq
    : public ModelBase
{
public:
    CreateHotWordsReq();
    virtual ~CreateHotWordsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHotWordsReq members

    /// <summary>
    /// 
    /// </summary>

    HotWordsTypeEnum getHotWordsType() const;
    bool hotWordsTypeIsSet() const;
    void unsethotWordsType();
    void setHotWordsType(const HotWordsTypeEnum& value);

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSisHotWords getSisHotWords() const;
    bool sisHotWordsIsSet() const;
    void unsetsisHotWords();
    void setSisHotWords(const CreateSisHotWords& value);


protected:
    HotWordsTypeEnum hotWordsType_;
    bool hotWordsTypeIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    CreateSisHotWords sisHotWords_;
    bool sisHotWordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotWordsReq_H_
