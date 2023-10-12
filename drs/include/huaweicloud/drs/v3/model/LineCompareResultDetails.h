
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareResultDetails_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareResultDetails_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v3/model/LineCompareDetail.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  LineCompareResultDetails
    : public ModelBase
{
public:
    LineCompareResultDetails();
    virtual ~LineCompareResultDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LineCompareResultDetails members

    /// <summary>
    /// 源库名称。
    /// </summary>

    std::string getSourceDbName() const;
    bool sourceDbNameIsSet() const;
    void unsetsourceDbName();
    void setSourceDbName(const std::string& value);

    /// <summary>
    /// 该库的表的行对比详情。
    /// </summary>

    std::vector<LineCompareDetail>& getLineCompareDetail();
    bool lineCompareDetailIsSet() const;
    void unsetlineCompareDetail();
    void setLineCompareDetail(const std::vector<LineCompareDetail>& value);

    /// <summary>
    /// 该库的行对比结果详情总数。
    /// </summary>

    int32_t getLineCompareDetailCount() const;
    bool lineCompareDetailCountIsSet() const;
    void unsetlineCompareDetailCount();
    void setLineCompareDetailCount(int32_t value);


protected:
    std::string sourceDbName_;
    bool sourceDbNameIsSet_;
    std::vector<LineCompareDetail> lineCompareDetail_;
    bool lineCompareDetailIsSet_;
    int32_t lineCompareDetailCount_;
    bool lineCompareDetailCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareResultDetails_H_
