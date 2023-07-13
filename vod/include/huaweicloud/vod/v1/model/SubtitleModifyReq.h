
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_SubtitleModifyReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_SubtitleModifyReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/AddSubtitle.h>
#include <string>
#include <huaweicloud/vod/v1/model/DeleteSubtitle.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  SubtitleModifyReq
    : public ModelBase
{
public:
    SubtitleModifyReq();
    virtual ~SubtitleModifyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubtitleModifyReq members

    /// <summary>
    /// 媒资ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 字幕默认语言(字幕必须存在)
    /// </summary>

    std::string getDefaultLanguage() const;
    bool defaultLanguageIsSet() const;
    void unsetdefaultLanguage();
    void setDefaultLanguage(const std::string& value);

    /// <summary>
    /// 需新增或修改的字幕
    /// </summary>

    std::vector<AddSubtitle>& getAddSubtitles();
    bool addSubtitlesIsSet() const;
    void unsetaddSubtitles();
    void setAddSubtitles(const std::vector<AddSubtitle>& value);

    /// <summary>
    /// 需删除的字幕，language不能与add_subtitles重复
    /// </summary>

    std::vector<DeleteSubtitle>& getDeleteSubtitles();
    bool deleteSubtitlesIsSet() const;
    void unsetdeleteSubtitles();
    void setDeleteSubtitles(const std::vector<DeleteSubtitle>& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string defaultLanguage_;
    bool defaultLanguageIsSet_;
    std::vector<AddSubtitle> addSubtitles_;
    bool addSubtitlesIsSet_;
    std::vector<DeleteSubtitle> deleteSubtitles_;
    bool deleteSubtitlesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_SubtitleModifyReq_H_
