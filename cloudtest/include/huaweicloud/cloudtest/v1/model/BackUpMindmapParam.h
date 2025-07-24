
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BackUpMindmapParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BackUpMindmapParam_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BackUpMindmapParam
    : public ModelBase
{
public:
    BackUpMindmapParam();
    virtual ~BackUpMindmapParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackUpMindmapParam members

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getBakName() const;
    bool bakNameIsSet() const;
    void unsetbakName();
    void setBakName(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getMemo() const;
    bool memoIsSet() const;
    void unsetmemo();
    void setMemo(const std::string& value);

    /// <summary>
    /// 脑图id
    /// </summary>

    std::string getMindmapId() const;
    bool mindmapIdIsSet() const;
    void unsetmindmapId();
    void setMindmapId(const std::string& value);


protected:
    std::string bakName_;
    bool bakNameIsSet_;
    std::string memo_;
    bool memoIsSet_;
    std::string mindmapId_;
    bool mindmapIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BackUpMindmapParam_H_
