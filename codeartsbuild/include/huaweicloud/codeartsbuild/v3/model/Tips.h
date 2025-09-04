
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Tips_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Tips_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资讯
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Tips
    : public ModelBase
{
public:
    Tips();
    virtual ~Tips();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Tips members

    /// <summary>
    /// 状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 下一个活动日
    /// </summary>

    int32_t getNextAction() const;
    bool nextActionIsSet() const;
    void unsetnextAction();
    void setNextAction(int32_t value);

    /// <summary>
    /// 下一个活动日剩余时间
    /// </summary>

    int32_t getNextActionRemainDay() const;
    bool nextActionRemainDayIsSet() const;
    void unsetnextActionRemainDay();
    void setNextActionRemainDay(int32_t value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getNextActionUrl() const;
    bool nextActionUrlIsSet() const;
    void unsetnextActionUrl();
    void setNextActionUrl(const std::string& value);


protected:
    int32_t status_;
    bool statusIsSet_;
    int32_t nextAction_;
    bool nextActionIsSet_;
    int32_t nextActionRemainDay_;
    bool nextActionRemainDayIsSet_;
    std::string nextActionUrl_;
    bool nextActionUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Tips_H_
