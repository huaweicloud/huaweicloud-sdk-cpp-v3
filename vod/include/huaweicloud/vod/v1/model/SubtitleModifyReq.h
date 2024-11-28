
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_SubtitleModifyReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_SubtitleModifyReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
    /// 外挂模式，不传默认取值为0  取值如下： -0：表示添加的字幕会外挂上历史产物 -1：表示添加的字幕不会外挂上历史产物
    /// </summary>

    std::string getRepackageMode() const;
    bool repackageModeIsSet() const;
    void unsetrepackageMode();
    void setRepackageMode(const std::string& value);

    /// <summary>
    /// 删除模式，不传默认取值为0  取值如下： -0：表示删除字幕会清除历史产物携带的字幕信息 -1：表示删除字幕不清除历史产物携带的字幕信息
    /// </summary>

    std::string getDeleteMode() const;
    bool deleteModeIsSet() const;
    void unsetdeleteMode();
    void setDeleteMode(const std::string& value);

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
    std::string repackageMode_;
    bool repackageModeIsSet_;
    std::string deleteMode_;
    bool deleteModeIsSet_;
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
