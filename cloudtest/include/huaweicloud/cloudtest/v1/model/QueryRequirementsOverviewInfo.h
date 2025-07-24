
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryRequirementsOverviewInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryRequirementsOverviewInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/PiFilterInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryRequirementsOverviewInfo
    : public ModelBase
{
public:
    QueryRequirementsOverviewInfo();
    virtual ~QueryRequirementsOverviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryRequirementsOverviewInfo members

    /// <summary>
    /// 筛选迭代ID
    /// </summary>

    std::string getFixedVersionId() const;
    bool fixedVersionIdIsSet() const;
    void unsetfixedVersionId();
    void setFixedVersionId(const std::string& value);

    /// <summary>
    /// 模块ID
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 关键字
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 每页数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PiFilterInfo getPiFilter() const;
    bool piFilterIsSet() const;
    void unsetpiFilter();
    void setPiFilter(const PiFilterInfo& value);


protected:
    std::string fixedVersionId_;
    bool fixedVersionIdIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    PiFilterInfo piFilter_;
    bool piFilterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryRequirementsOverviewInfo_H_
