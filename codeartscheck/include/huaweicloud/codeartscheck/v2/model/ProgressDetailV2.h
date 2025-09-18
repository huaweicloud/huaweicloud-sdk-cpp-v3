
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ProgressDetailV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ProgressDetailV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ProgressDetailV2
    : public ModelBase
{
public:
    ProgressDetailV2();
    virtual ~ProgressDetailV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProgressDetailV2 members

    /// <summary>
    /// 进度百分比
    /// </summary>

    std::string getRatio() const;
    bool ratioIsSet() const;
    void unsetratio();
    void setRatio(const std::string& value);

    /// <summary>
    /// 中文信息
    /// </summary>

    std::string getInfo() const;
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::string& value);


protected:
    std::string ratio_;
    bool ratioIsSet_;
    std::string info_;
    bool infoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ProgressDetailV2_H_
