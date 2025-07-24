
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BackgroundInfoVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BackgroundInfoVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BackgroundInfoVo
    : public ModelBase
{
public:
    BackgroundInfoVo();
    virtual ~BackgroundInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackgroundInfoVo members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// cover文件名称
    /// </summary>

    std::string getCoverFileName() const;
    bool coverFileNameIsSet() const;
    void unsetcoverFileName();
    void setCoverFileName(const std::string& value);

    /// <summary>
    /// 背景文件名称
    /// </summary>

    std::string getBackgroundFileName() const;
    bool backgroundFileNameIsSet() const;
    void unsetbackgroundFileName();
    void setBackgroundFileName(const std::string& value);

    /// <summary>
    /// logo文件名称
    /// </summary>

    std::string getLogoFileName() const;
    bool logoFileNameIsSet() const;
    void unsetlogoFileName();
    void setLogoFileName(const std::string& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string coverFileName_;
    bool coverFileNameIsSet_;
    std::string backgroundFileName_;
    bool backgroundFileNameIsSet_;
    std::string logoFileName_;
    bool logoFileNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BackgroundInfoVo_H_
