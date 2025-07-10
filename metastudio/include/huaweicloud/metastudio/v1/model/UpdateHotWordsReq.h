
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotWordsReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotWordsReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/HotWordsTypeEnum.h>
#include <huaweicloud/metastudio/v1/model/UpdateMobvoiHotWords.h>
#include <huaweicloud/metastudio/v1/model/UpdateSisHotWords.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改热词记录请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateHotWordsReq
    : public ModelBase
{
public:
    UpdateHotWordsReq();
    virtual ~UpdateHotWordsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHotWordsReq members

    /// <summary>
    /// 
    /// </summary>

    HotWordsTypeEnum getHotWordsType() const;
    bool hotWordsTypeIsSet() const;
    void unsethotWordsType();
    void setHotWordsType(const HotWordsTypeEnum& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSisHotWords getSisHotWords() const;
    bool sisHotWordsIsSet() const;
    void unsetsisHotWords();
    void setSisHotWords(const UpdateSisHotWords& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateMobvoiHotWords getMobvoiHotWords() const;
    bool mobvoiHotWordsIsSet() const;
    void unsetmobvoiHotWords();
    void setMobvoiHotWords(const UpdateMobvoiHotWords& value);


protected:
    HotWordsTypeEnum hotWordsType_;
    bool hotWordsTypeIsSet_;
    UpdateSisHotWords sisHotWords_;
    bool sisHotWordsIsSet_;
    UpdateMobvoiHotWords mobvoiHotWords_;
    bool mobvoiHotWordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotWordsReq_H_
