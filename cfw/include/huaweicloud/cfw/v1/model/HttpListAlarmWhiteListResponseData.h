
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpListAlarmWhiteListResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpListAlarmWhiteListResponseData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/EipInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  HttpListAlarmWhiteListResponseData
    : public ModelBase
{
public:
    HttpListAlarmWhiteListResponseData();
    virtual ~HttpListAlarmWhiteListResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpListAlarmWhiteListResponseData members

    /// <summary>
    /// 查询告警白名单返回值数据
    /// </summary>

    std::vector<EipInfo>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<EipInfo>& value);

    /// <summary>
    /// 目前页数
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// 每页个数
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::vector<EipInfo> list_;
    bool listIsSet_;
    int32_t pages_;
    bool pagesIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpListAlarmWhiteListResponseData_H_
