
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResultDetails_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResultDetails_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/ContentCompareDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ContentCompareResultDetails
    : public ModelBase
{
public:
    ContentCompareResultDetails();
    virtual ~ContentCompareResultDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContentCompareResultDetails members

    /// <summary>
    /// 源库名称。
    /// </summary>

    std::string getSourceDbName() const;
    bool sourceDbNameIsSet() const;
    void unsetsourceDbName();
    void setSourceDbName(const std::string& value);

    /// <summary>
    /// 该库的表的内容对比详情。
    /// </summary>

    std::vector<ContentCompareDetail>& getContentCompareDetail();
    bool contentCompareDetailIsSet() const;
    void unsetcontentCompareDetail();
    void setContentCompareDetail(const std::vector<ContentCompareDetail>& value);

    /// <summary>
    /// 内容对比结果详情总数。
    /// </summary>

    int32_t getContentCompareDetailCount() const;
    bool contentCompareDetailCountIsSet() const;
    void unsetcontentCompareDetailCount();
    void setContentCompareDetailCount(int32_t value);

    /// <summary>
    /// 该库的表的内容对比详情(无法对比的表)。
    /// </summary>

    std::vector<ContentCompareDetail>& getContentUncompareDetail();
    bool contentUncompareDetailIsSet() const;
    void unsetcontentUncompareDetail();
    void setContentUncompareDetail(const std::vector<ContentCompareDetail>& value);

    /// <summary>
    /// 内容对比结果详情总数(无法对比的表)。
    /// </summary>

    int32_t getContentUncompareDetailCount() const;
    bool contentUncompareDetailCountIsSet() const;
    void unsetcontentUncompareDetailCount();
    void setContentUncompareDetailCount(int32_t value);


protected:
    std::string sourceDbName_;
    bool sourceDbNameIsSet_;
    std::vector<ContentCompareDetail> contentCompareDetail_;
    bool contentCompareDetailIsSet_;
    int32_t contentCompareDetailCount_;
    bool contentCompareDetailCountIsSet_;
    std::vector<ContentCompareDetail> contentUncompareDetail_;
    bool contentUncompareDetailIsSet_;
    int32_t contentUncompareDetailCount_;
    bool contentUncompareDetailCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResultDetails_H_
