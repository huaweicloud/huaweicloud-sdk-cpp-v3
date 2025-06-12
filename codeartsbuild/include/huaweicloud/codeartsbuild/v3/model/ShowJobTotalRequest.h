
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobTotalRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobTotalRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobTotalRequest
    : public ModelBase
{
public:
    ShowJobTotalRequest();
    virtual ~ShowJobTotalRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobTotalRequest members

    /// <summary>
    /// 构建工程项目ID，36位数字、小写字母组合。
    /// </summary>

    std::string getBuildProjectId() const;
    bool buildProjectIdIsSet() const;
    void unsetbuildProjectId();
    void setBuildProjectId(const std::string& value);

    /// <summary>
    /// 区间开始时间，格式yyyy-MM-dd HH:mm:ss。
    /// </summary>

    std::string getFromDate() const;
    bool fromDateIsSet() const;
    void unsetfromDate();
    void setFromDate(const std::string& value);

    /// <summary>
    /// 区间结束时间，格式yyyy-MM-dd HH:mm:ss。
    /// </summary>

    std::string getToDate() const;
    bool toDateIsSet() const;
    void unsettoDate();
    void setToDate(const std::string& value);


protected:
    std::string buildProjectId_;
    bool buildProjectIdIsSet_;
    std::string fromDate_;
    bool fromDateIsSet_;
    std::string toDate_;
    bool toDateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowJobTotalRequest& dereference_from_shared_ptr(std::shared_ptr<ShowJobTotalRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobTotalRequest_H_
