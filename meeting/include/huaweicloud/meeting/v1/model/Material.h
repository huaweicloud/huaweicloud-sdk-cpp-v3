
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_Material_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_Material_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 素材信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  Material
    : public ModelBase
{
public:
    Material();
    virtual ~Material();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Material members

    /// <summary>
    /// 素材ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 更新者。
    /// </summary>

    std::string getLastUpdatedBy() const;
    bool lastUpdatedByIsSet() const;
    void unsetlastUpdatedBy();
    void setLastUpdatedBy(const std::string& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 素材名称。
    /// </summary>

    std::string getMaterialName() const;
    bool materialNameIsSet() const;
    void unsetmaterialName();
    void setMaterialName(const std::string& value);

    /// <summary>
    /// 素材分辨率。
    /// </summary>

    std::string getMaterialResolution() const;
    bool materialResolutionIsSet() const;
    void unsetmaterialResolution();
    void setMaterialResolution(const std::string& value);

    /// <summary>
    /// 素材大小（含单位）。
    /// </summary>

    std::string getMaterialSizeStr() const;
    bool materialSizeStrIsSet() const;
    void unsetmaterialSizeStr();
    void setMaterialSizeStr(const std::string& value);

    /// <summary>
    /// 素材云盘存储文件下载地址。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string lastUpdatedBy_;
    bool lastUpdatedByIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string materialName_;
    bool materialNameIsSet_;
    std::string materialResolution_;
    bool materialResolutionIsSet_;
    std::string materialSizeStr_;
    bool materialSizeStrIsSet_;
    std::string filePath_;
    bool filePathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_Material_H_
